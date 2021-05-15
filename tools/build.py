#!/usr/bin/env python3

import os
import sys
import subprocess
import shutil

######## GLOBALS #########
MAINPREFIX = "x"
PREFIX = "tss_mods_"
##########################

def mod_time(path):
    if not os.path.isdir(path):
        return os.path.getmtime(path)
    maxi = os.path.getmtime(path)
    for p in os.listdir(path):
        maxi = max(mod_time(os.path.join(path, p)), maxi)
    return maxi


def check_for_changes(addonspath, module):
    if not os.path.exists(os.path.join(addonspath, "{}{}.pbo".format(PREFIX,module))):
        return True
    return mod_time(os.path.join(addonspath, module)) > mod_time(os.path.join(addonspath, "{}{}.pbo".format(PREFIX,module)))

def check_for_obsolete_pbos(addonspath, file):
    module = file[len(PREFIX):-4]
    if not os.path.exists(os.path.join(addonspath, module)):
        return True
    return False

def main():
    print("""
  #########################
  # tss_mods Debug Build #
  #########################
""")

    scriptpath = os.path.realpath(__file__)
    projectpath = os.path.dirname(os.path.dirname(scriptpath))
    for pbopath in ["addons", "optionals"]:
        print ("")
        print ("Packing " + pbopath)
        print ("#######################")
        addonspath = os.path.join(projectpath, pbopath)

        os.chdir(addonspath)

        made = 0
        failed = 0
        skipped = 0
        removed = 0
        
        for file in os.listdir(addonspath):
            if os.path.isfile(file):
                if check_for_obsolete_pbos(addonspath, file):
                    removed += 1
                    print("  Removing obsolete file => " + file)
                    os.remove(file)
        print("")
        
        for p in os.listdir(addonspath):
            path = os.path.join(addonspath, p)
            copy = pbopath == "optionals"
            filename = "{}{}.pbo".format(PREFIX,p)
            if not os.path.isdir(path):
                continue
            if p[0] == ".":
                continue
            if not check_for_changes(addonspath, p):
                skipped += 1
                print("  Skipping {}.".format(p))
            else:
                print("# Making {} ...".format(p))
                try:
                    subprocess.check_output([
                        "makepbo",
                        "-NUP",
                        "-@={}\\{}\\addons\\{}".format(MAINPREFIX,PREFIX.rstrip("_"),p),
                        p,
                        filename
                    ], stderr=subprocess.STDOUT)
                except:
                    copy = False
                    failed += 1
                    print("  Failed to make {}.".format(p))
                else:
                    made += 1
                    print("  Successfully made {}.".format(p))

            if copy:
                copypath = os.path.join(projectpath, "addons")
                copyfilepath = os.path.join(copypath, filename)
                sourcepath = os.path.join(projectpath, "optionals", filename)
                print("  Copying {} to {}".format(filename, copypath))
                shutil.copyfile(sourcepath, copyfilepath)

        print("\n# Done.")
        print("  Made {}, skipped {}, removed {}, failed to make {}.".format(made, skipped, removed, failed))


if __name__ == "__main__":
    sys.exit(main())
