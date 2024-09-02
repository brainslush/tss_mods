from pprint import pprint

backpacks = [
    ["milgp_bp_hydration_aor1", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_aor1", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_aor1", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_aor1", "milgp_Bag_Base"],
    ["milgp_bp_hydration_aor2", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_aor2", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_aor2", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_aor2", "milgp_Bag_Base"],
    ["milgp_bp_hydration_blk", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_blk", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_blk", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_blk", "milgp_Bag_Base"],
    ["milgp_bp_hydration_mc", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_mc", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_mc", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_mc", "milgp_Bag_Base"],
    ["milgp_bp_hydration_mcar", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_mcar", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_mcar", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_mcar", "milgp_Bag_Base"],
    ["milgp_bp_hydration_mcb", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_mcb", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_mcb", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_mcb", "milgp_Bag_Base"],
    ["milgp_bp_hydration_mct", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_mct", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_mct", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_mct", "milgp_Bag_Base"],
    ["milgp_bp_hydration_rgr", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_rgr", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_rgr", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_rgr", "milgp_Bag_Base"],
    ["milgp_bp_hydration_cb", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_cb", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_cb", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_cb", "milgp_Bag_Base"],
    ["milgp_bp_hydration_khk", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_khk", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_khk", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_khk", "milgp_Bag_Base"],
    ["milgp_bp_hydration_tan", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_tan", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_tan", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_tan", "milgp_Bag_Base"],
    ["milgp_bp_hydration_wht", "milgp_Bag_Base"],
    ["milgp_bp_Tomahawk_wht", "milgp_Bag_Base"],
    ["milgp_bp_Pointman_wht", "milgp_Bag_Base"],
    ["milgp_bp_Breacher_wht", "milgp_Bag_Base"],
]
TEMPLATE = """
    class {0} : {1} {{
        containerClass = "120";
    }};"""

text = "".join([TEMPLATE.format(_[0], _[1]) for _ in backpacks])

with open("small_backpacks.hpp", "w") as fh:
    fh.write(text)
