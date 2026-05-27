class XtdGearModels {
    class CfgWeapons {
        class aceax_family_gm_ak_primary_weapon {
            label = "AK";
            author = "Moony";
            options[] = {"type", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"AK_47", "AKM"};
                class AK_47 { label = "AK-47"; };
                class AKM { label = "AKM"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "NIGHT", "GL", "LONG", "FOLDING", "FOLDING_LONG", "FOLDING_NIGHT"};
                class STANDARD { label = "Standard"; };
                class NIGHT { label = "Night"; };
                class GL { label = "GL"; };
                class LONG { label = "Long"; };
                class FOLDING { label = "Folding"; };
                class FOLDING_LONG { label = "Folding Long"; };
                class FOLDING_NIGHT { label = "Folding Night"; };
            };
        };
        class aceax_family_gm_ballistic_vest_pilot_vest {
            label = "Ballistic Vest, Pilot";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "SHOULDERPAD"};
                class STANDARD { label = "Standard"; };
                class SHOULDERPAD { label = "Shoulderpad"; };
            };
        };
        class aceax_family_gm_battle_dress_uniform_uniform {
            label = "Battle Dress Uniform";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "WOODLAND"};
                class OLIVE { label = "Olive"; };
                class WOODLAND { label = "Woodland"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"W_GLOVES", "STANDARD", "ROLLED"};
                class W_GLOVES { label = "w/ Gloves"; };
                class STANDARD { label = "Standard"; };
                class ROLLED { label = "Rolled"; };
            };
        };
        class aceax_family_gm_belt_rig_vest {
            label = "Belt Rig";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"CREW", "MG", "MEDIC", "OFFICER", "RIFLEMAN", "DEMO", "LEADER"};
                class CREW { label = "Crew"; };
                class MG { label = "MG"; };
                class MEDIC { label = "Medic"; };
                class OFFICER { label = "Officer"; };
                class RIFLEMAN { label = "Rifleman"; };
                class DEMO { label = "Demo"; };
                class LEADER { label = "Leader"; };
            };
        };
        class aceax_family_gm_beret_headgear {
            label = "Beret";
            author = "Moony";
            options[] = {"type", "camo", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "OFFICER", "POLISH"};
                class STANDARD { label = "Standard"; };
                class OFFICER { label = "Officer"; };
                class POLISH { label = "Polish"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"ANTI_AIR", "ANTI_TANK", "ARMOR", "ARMORED_RECON", "ARMY_AVIATION", "ARTILLERY", "BLACK", "BORDERGUARDS", "CYAN", "DARK_BLUE", "DARK_GREY", "ENGINEER", "GSG9", "GUARD_BAT", "INFANTRY", "LRR", "MAINTEN", "MECH_INF", "MEDI", "MIL_POL", "MUS_CO", "NBC", "ORANGE", "STRICH", "OP_COM", "PARA", "BLUE", "RED", "RECON", "SIGNALS", "SPEC_OPS", "SUPPLY", "TOPO"};
                class ANTI_AIR { label = "Anti Air"; };
                class ANTI_TANK { label = "Anti Tank"; };
                class ARMOR { label = "Armor"; };
                class ARMORED_RECON { label = "Armored Recon"; };
                class ARMY_AVIATION { label = "Army Aviation"; };
                class ARTILLERY { label = "Artillery"; };
                class BLACK { label = "Black"; };
                class BORDERGUARDS { label = "Borderguards"; };
                class CYAN { label = "Cyan"; };
                class DARK_BLUE { label = "Dark Blue"; };
                class DARK_GREY { label = "Dark Grey"; };
                class ENGINEER { label = "Engineer"; };
                class GSG9 { label = "GSG9"; };
                class GUARD_BAT { label = "Guard Bat."; };
                class INFANTRY { label = "Infantry"; };
                class LRR { label = "LRR"; };
                class MAINTEN { label = "Mainten."; };
                class MECH_INF { label = "Mech. Inf."; };
                class MEDI { label = "Medi."; };
                class MIL_POL { label = "Mil. Pol."; };
                class MUS_CO { label = "Mus. Co."; };
                class NBC { label = "NBC"; };
                class ORANGE { label = "Orange"; };
                class STRICH { label = "Strich"; };
                class OP_COM { label = "Op. Com."; };
                class PARA { label = "Para"; };
                class BLUE { label = "Blue"; };
                class RED { label = "Red"; };
                class RECON { label = "Recon"; };
                class SIGNALS { label = "Signals"; };
                class SPEC_OPS { label = "Spec. Ops."; };
                class SUPPLY { label = "Supply"; };
                class TOPO { label = "Topo"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "EMBLEM", "NO_INSIGNIA", "W_HEADSET"};
                class STANDARD { label = "Standard"; };
                class EMBLEM { label = "Emblem"; };
                class NO_INSIGNIA { label = "No Insignia"; };
                class W_HEADSET { label = "w/ Headset"; };
            };
        };
        class aceax_family_gm_bespa_vest {
            label = "BESPA";
            author = "Moony";
            options[] = {"type", "camo", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RIG", "UTV"};
                class STANDARD { label = "Standard"; };
                class RIG { label = "Rig"; };
                class UTV { label = "UTV"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"STRICH", "WINTER"};
                class STRICH { label = "Strich"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MG", "RIFLEMAN", "BELT", "LEADER", "SPECIALIST", "OFFICER"};
                class STANDARD { label = "Standard"; };
                class MG { label = "MG"; };
                class RIFLEMAN { label = "Rifleman"; };
                class BELT { label = "Belt"; };
                class LEADER { label = "Leader"; };
                class SPECIALIST { label = "Specialist"; };
                class OFFICER { label = "Officer"; };
            };
        };
        class aceax_family_gm_boonie_headgear {
            label = "Boonie";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"TROPEN", "FLECKEN", "M_84", "OLIVE", "WOODLAND"};
                class TROPEN { label = "Tropen"; };
                class FLECKEN { label = "Flecken"; };
                class M_84 { label = "M/84"; };
                class OLIVE { label = "Olive"; };
                class WOODLAND { label = "Woodland"; };
            };
        };
        class aceax_family_gm_c7_primary_weapon {
            label = "C7";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLACK"};
                class OLIVE { label = "Olive"; };
                class BLACK { label = "Black"; };
            };
        };
        class aceax_family_gm_casual_clothing_uniform {
            label = "Casual Clothing";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"VARIANTE_1", "VARIANTE_2", "VARIANTE_3", "VARIANTE_4"};
                class VARIANTE_1 { label = "Variante 1"; };
                class VARIANTE_2 { label = "Variante 2"; };
                class VARIANTE_3 { label = "Variante 3"; };
                class VARIANTE_4 { label = "Variante 4"; };
            };
        };
        class aceax_family_gm_combat_helmet_m_96_headgear {
            label = "Combat Helmet M/96";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLUE", "M_84", "WINTER", "WOODLAND"};
                class OLIVE { label = "Olive"; };
                class BLUE { label = "Blue"; };
                class M_84 { label = "M/84"; };
                class WINTER { label = "Winter"; };
                class WOODLAND { label = "Woodland"; };
            };
        };
        class aceax_family_gm_combat_suit_uniform {
            label = "Combat Suit";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"FLECKEN", "TROPEN", "OLIVE"};
                class FLECKEN { label = "Flecken"; };
                class TROPEN { label = "Tropen"; };
                class OLIVE { label = "Olive"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "ROLLED", "T_SHIRT"};
                class STANDARD { label = "Standard"; };
                class ROLLED { label = "Rolled"; };
                class T_SHIRT { label = "T-Shirt"; };
            };
        };
        class aceax_family_gm_combat_vest_m3_vest {
            label = "Combat Vest M3";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"STRICH"};
                class STRICH { label = "Strich"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"POLICE", "STANDARD"};
                class POLICE { label = "Police"; };
                class STANDARD { label = "Standard"; };
            };
        };
        class aceax_family_gm_dress_uniform_uniform {
            label = "Dress Uniform";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"GREY", "BLUE"};
                class GREY { label = "Grey"; };
                class BLUE { label = "Blue"; };
            };
        };
        class aceax_family_gm_ferod_16_binocular {
            label = "FeroD-16";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"DESERT", "OLIVE", "WINTER"};
                class DESERT { label = "Desert"; };
                class OLIVE { label = "Olive"; };
                class WINTER { label = "Winter"; };
            };
        };
        class aceax_family_gm_field_cap_headgear {
            label = "Field Cap";
            author = "Moony";
            options[] = {"type", "camo", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "WV_0443"};
                class STANDARD { label = "Standard"; };
                class WV_0443 { label = "wv. 0443"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"TROPEN", "FLECKEN", "GREY", "OLIVE", "GREEN", "FROG"};
                class TROPEN { label = "Tropen"; };
                class FLECKEN { label = "Flecken"; };
                class GREY { label = "Grey"; };
                class OLIVE { label = "Olive"; };
                class GREEN { label = "Green"; };
                class FROG { label = "Frog"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "W_M62"};
                class STANDARD { label = "Standard"; };
                class W_M62 { label = "w/ M62"; };
            };
        };
        class aceax_family_gm_field_dress_uniform {
            label = "Field Dress";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"CLEAN", "W_GLOVES", "DIRTY"};
                class CLEAN { label = "Clean"; };
                class W_GLOVES { label = "w/ Gloves"; };
                class DIRTY { label = "Dirty"; };
            };
        };
        class aceax_family_gm_field_parka_uniform {
            label = "Field Parka";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"CLEAN", "DIRTY", "WINTER"};
                class CLEAN { label = "Clean"; };
                class DIRTY { label = "Dirty"; };
                class WINTER { label = "Winter"; };
            };
        };
        class aceax_family_gm_field_service_uniform_uniform {
            label = "Field Service Uniform";
            author = "Moony";
            options[] = {"type", "camo", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "UTV"};
                class STANDARD { label = "Standard"; };
                class UTV { label = "UTV"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "STRICH", "STRICH_GREEN", "WINTER"};
                class BLACK { label = "Black"; };
                class STRICH { label = "Strich"; };
                class STRICH_GREEN { label = "Strich Green"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "W_GLOVES", "ROLLED"};
                class STANDARD { label = "Standard"; };
                class W_GLOVES { label = "w/ Gloves"; };
                class ROLLED { label = "Rolled"; };
            };
        };
        class aceax_family_gm_field_uniform_wz_5637_uniform {
            label = "Field Uniform wz.5637";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"GREEN", "FROG", "WINTER"};
                class GREEN { label = "Green"; };
                class FROG { label = "Frog"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "W_GLOVES", "ROLLED"};
                class STANDARD { label = "Standard"; };
                class W_GLOVES { label = "w/ Gloves"; };
                class ROLLED { label = "Rolled"; };
            };
        };
        class aceax_family_gm_fjh_model_4_headgear {
            label = "FJH Model 4";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "WHITE"};
                class OLIVE { label = "Olive"; };
                class WHITE { label = "White"; };
            };
        };
        class aceax_family_gm_flak_vest_vest {
            label = "Flak Vest";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "CREW", "MG", "MEDIC", "OFFICER", "RIFLEMAN", "DEMO", "LEADER"};
                class STANDARD { label = "Standard"; };
                class CREW { label = "Crew"; };
                class MG { label = "MG"; };
                class MEDIC { label = "Medic"; };
                class OFFICER { label = "Officer"; };
                class RIFLEMAN { label = "Rifleman"; };
                class DEMO { label = "Demo"; };
                class LEADER { label = "Leader"; };
            };
        };
        class aceax_family_gm_flight_suit_uniform {
            label = "Flight Suit";
            author = "Moony";
            options[] = {"type", "camo", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"COMMANDO", "STANDARD"};
                class COMMANDO { label = "Commando"; };
                class STANDARD { label = "Standard"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "GREY", "OLIVE", "GREEN", "ORANGE"};
                class BLACK { label = "Black"; };
                class GREY { label = "Grey"; };
                class OLIVE { label = "Olive"; };
                class GREEN { label = "Green"; };
                class ORANGE { label = "Orange"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "ROLLED"};
                class STANDARD { label = "Standard"; };
                class ROLLED { label = "Rolled"; };
            };
        };
        class aceax_family_gm_frag_vest_m_00_vest {
            label = "Frag Vest M/00";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"FLECKEN", "BLUE", "WINTER", "WOODLAND", "GREEN"};
                class FLECKEN { label = "Flecken"; };
                class BLUE { label = "Blue"; };
                class WINTER { label = "Winter"; };
                class WOODLAND { label = "Woodland"; };
                class GREEN { label = "Green"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MG", "RIFLEMAN"};
                class STANDARD { label = "Standard"; };
                class MG { label = "MG"; };
                class RIFLEMAN { label = "Rifleman"; };
            };
        };
        class aceax_family_gm_g11k2_primary_weapon {
            label = "G11K2";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RIS"};
                class STANDARD { label = "Standard"; };
                class RIS { label = "RIS"; };
            };
        };
        class aceax_family_gm_g3_primary_weapon {
            label = "G3";
            author = "Moony";
            options[] = {"type", "camo"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"A3", "A3A0", "A3A1", "A4", "A4A0", "A4A1", "KA4", "KA4A1", "SG1"};
                class A3 { label = "A3"; };
                class A3A0 { label = "A3A0"; };
                class A3A1 { label = "A3A1"; };
                class A4 { label = "A4"; };
                class A4A0 { label = "A4A0"; };
                class A4A1 { label = "A4A1"; };
                class KA4 { label = "KA4"; };
                class KA4A1 { label = "KA4A1"; };
                class SG1 { label = "SG1"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "OLIVE", "GOLD"};
                class BLACK { label = "Black"; };
                class OLIVE { label = "Olive"; };
                class GOLD { label = "Gold"; };
            };
        };
        class aceax_family_gm_g36_primary_weapon {
            label = "G36";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"REFLEX", "STANDARD"};
                class REFLEX { label = "Reflex"; };
                class STANDARD { label = "Standard"; };
            };
        };
        class aceax_family_gm_g8_primary_weapon {
            label = "G8";
            author = "Moony";
            options[] = {"type"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"A1", "A2"};
                class A1 { label = "A1"; };
                class A2 { label = "A2"; };
            };
        };
        class aceax_family_gm_gear_vest {
            label = "Gear";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"CREW", "MG", "MG_STRICH", "MEDIC", "OFFICER", "RIFLEMAN", "RIFLEMAN_STRICH", "BAG", "BORDER_STRICH", "BORDER", "DETONATOR", "LEADER", "LEADER_STRICH", "LEADER_SMG", "CREW_M_54", "MG_M_54", "RIFLEMAN_M_54", "MP", "POLICE", "SMG", "SPEC_STRICH"};
                class CREW { label = "Crew"; };
                class MG { label = "MG"; };
                class MG_STRICH { label = "MG Strich"; };
                class MEDIC { label = "Medic"; };
                class OFFICER { label = "Officer"; };
                class RIFLEMAN { label = "Rifleman"; };
                class RIFLEMAN_STRICH { label = "Rifleman Strich"; };
                class BAG { label = "Bag"; };
                class BORDER_STRICH { label = "Border Strich"; };
                class BORDER { label = "Border"; };
                class DETONATOR { label = "Detonator"; };
                class LEADER { label = "Leader"; };
                class LEADER_STRICH { label = "Leader Strich"; };
                class LEADER_SMG { label = "Leader SMG"; };
                class CREW_M_54 { label = "Crew M/54"; };
                class MG_M_54 { label = "MG M/54"; };
                class RIFLEMAN_M_54 { label = "Rifleman M/54"; };
                class MP { label = "MP"; };
                class POLICE { label = "Police"; };
                class SMG { label = "SMG"; };
                class SPEC_STRICH { label = "Spec. Strich"; };
            };
        };
        class aceax_family_gm_gv_m_75_primary_weapon {
            label = "GV M/75";
            author = "Moony";
            options[] = {"type", "camo"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "CARBINE"};
                class STANDARD { label = "Standard"; };
                class CARBINE { label = "Carbine"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLACK"};
                class OLIVE { label = "Olive"; };
                class BLACK { label = "Black"; };
            };
        };
        class aceax_family_gm_headwrap_headgear {
            label = "Headwrap";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"TROPEN", "FLECKEN", "BLACK", "BLUE", "CAMO", "GREEN", "M_84", "OLIVE", "FROG", "MORO", "STRICH", "WHITE", "YELLOW"};
                class TROPEN { label = "Tropen"; };
                class FLECKEN { label = "Flecken"; };
                class BLACK { label = "Black"; };
                class BLUE { label = "Blue"; };
                class CAMO { label = "Camo"; };
                class GREEN { label = "Green"; };
                class M_84 { label = "M/84"; };
                class OLIVE { label = "Olive"; };
                class FROG { label = "Frog"; };
                class MORO { label = "Moro"; };
                class STRICH { label = "Strich"; };
                class WHITE { label = "White"; };
                class YELLOW { label = "Yellow"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "CREW"};
                class STANDARD { label = "Standard"; };
                class CREW { label = "Crew"; };
            };
        };
        class aceax_family_gm_hk33_primary_weapon {
            label = "HK33";
            author = "Moony";
            options[] = {"type", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"A2", "A3", "SG1"};
                class A2 { label = "A2"; };
                class A3 { label = "A3"; };
                class SG1 { label = "SG1"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"LONG", "SHORT", "STANDARD"};
                class LONG { label = "Long"; };
                class SHORT { label = "Short"; };
                class STANDARD { label = "Standard"; };
            };
        };
        class aceax_family_gm_hk53_primary_weapon {
            label = "HK53";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RETRACTABLE"};
                class STANDARD { label = "Standard"; };
                class RETRACTABLE { label = "Retractable"; };
            };
        };
        class aceax_family_gm_kosei_c80_watch {
            label = "Kosei C80";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "BLUE", "GOLD", "GREEN", "RED", "SILVER"};
                class BLACK { label = "Black"; };
                class BLUE { label = "Blue"; };
                class GOLD { label = "Gold"; };
                class GREEN { label = "Green"; };
                class RED { label = "Red"; };
                class SILVER { label = "Silver"; };
            };
        };
        class aceax_family_gm_lmg_k_500_primary_weapon {
            label = "LMG K 500";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BROWN", "BLACK", "PLUM"};
                class BROWN { label = "Brown"; };
                class BLACK { label = "Black"; };
                class PLUM { label = "Plum"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "FOLDING"};
                class STANDARD { label = "Standard"; };
                class FOLDING { label = "Folding"; };
            };
        };
        class aceax_family_gm_m_52_headgear {
            label = "M/52";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "WINTER"};
                class OLIVE { label = "Olive"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_m_84_uniform {
            label = "M/84";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"GREEN", "OLIVE", "WINTER"};
                class GREEN { label = "Green"; };
                class OLIVE { label = "Olive"; };
                class WINTER { label = "Winter"; };
            };
        };
        class aceax_family_gm_m16_primary_weapon {
            label = "M16";
            author = "Moony";
            options[] = {"type"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"A1", "A2"};
                class A1 { label = "A1"; };
                class A2 { label = "A2"; };
            };
        };
        class aceax_family_gm_m35_53_headgear {
            label = "M35/53";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "TAN"};
                class BLACK { label = "Black"; };
                class TAN { label = "Tan"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_m38_72_headgear {
            label = "M38/72";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "W_GOGGLES"};
                class STANDARD { label = "Standard"; };
                class W_GOGGLES { label = "w/ Goggles"; };
            };
        };
        class aceax_family_gm_m56_headgear {
            label = "M56";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLUE", "STRICH", "WINTER"};
                class OLIVE { label = "Olive"; };
                class BLUE { label = "Blue"; };
                class STRICH { label = "Strich"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_m62_headgear {
            label = "M62";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"GREEN", "BLUE", "FLECKEN", "WINTER", "WOODLAND"};
                class GREEN { label = "Green"; };
                class BLUE { label = "Blue"; };
                class FLECKEN { label = "Flecken"; };
                class WINTER { label = "Winter"; };
                class WOODLAND { label = "Woodland"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_m86_headgear {
            label = "M86";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLUE", "STRICH", "WINTER"};
                class OLIVE { label = "Olive"; };
                class BLUE { label = "Blue"; };
                class STRICH { label = "Strich"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_m92_headgear {
            label = "M92";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"FLECKEN", "TROPEN", "BLACK", "OLIVE", "WINTER"};
                class FLECKEN { label = "Flecken"; };
                class TROPEN { label = "Tropen"; };
                class BLACK { label = "Black"; };
                class OLIVE { label = "Olive"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "W_GOGGLES"};
                class STANDARD { label = "Standard"; };
                class W_GOGGLES { label = "w/ Goggles"; };
            };
        };
        class aceax_family_gm_mg8_primary_weapon {
            label = "MG8";
            author = "Moony";
            options[] = {"type"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"A1", "A2"};
                class A1 { label = "A1"; };
                class A2 { label = "A2"; };
            };
        };
        class aceax_family_gm_mixed_fatigues_uniform {
            label = "Mixed Fatigues";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"VER_1", "VER_2", "VER_3", "VER_4", "VER_5", "VER_6", "VER_7", "VER_8", "VER_9"};
                class VER_1 { label = "Ver. 1"; };
                class VER_2 { label = "Ver. 2"; };
                class VER_3 { label = "Ver. 3"; };
                class VER_4 { label = "Ver. 4"; };
                class VER_5 { label = "Ver. 5"; };
                class VER_6 { label = "Ver. 6"; };
                class VER_7 { label = "Ver. 7"; };
                class VER_8 { label = "Ver. 8"; };
                class VER_9 { label = "Ver. 9"; };
            };
        };
        class aceax_family_gm_mpi_ak_primary_weapon {
            label = "MPi AK";
            author = "Moony";
            options[] = {"type", "camo", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"AK_74", "KM", "KM_72"};
                class AK_74 { label = "AK-74"; };
                class KM { label = "KM"; };
                class KM_72 { label = "KM-72"; };
            };
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BROWN", "BLACK", "PLUM"};
                class BROWN { label = "Brown"; };
                class BLACK { label = "Black"; };
                class PLUM { label = "Plum"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "FOLDING", "FOLDING_SHORT", "FOLDING_SD"};
                class STANDARD { label = "Standard"; };
                class FOLDING { label = "Folding"; };
                class FOLDING_SHORT { label = "Folding Short"; };
                class FOLDING_SD { label = "Folding SD"; };
            };
        };
        class aceax_family_gm_msg90_primary_weapon {
            label = "MSG90";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"TYPE_1", "TYPE_2"};
                class TYPE_1 { label = "Type 1"; };
                class TYPE_2 { label = "Type 2"; };
            };
        };
        class aceax_family_gm_mzf512_primary_weapon {
            label = "MZF512";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RIS"};
                class STANDARD { label = "Standard"; };
                class RIS { label = "RIS"; };
            };
        };
        class aceax_family_gm_ochra_vest {
            label = "Ochra";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BEIGE", "BLUE", "FROG", "OLIVE", "STRICH", "WINTER"};
                class BEIGE { label = "Beige"; };
                class BLUE { label = "Blue"; };
                class FROG { label = "Frog"; };
                class OLIVE { label = "Olive"; };
                class STRICH { label = "Strich"; };
                class WINTER { label = "Winter"; };
            };
        };
        class aceax_family_gm_operator_suit_uniform {
            label = "Operator Suit";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"GREEN", "BLACK"};
                class GREEN { label = "Green"; };
                class BLACK { label = "Black"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "ROLLED"};
                class STANDARD { label = "Standard"; };
                class ROLLED { label = "Rolled"; };
            };
        };
        class aceax_family_gm_p1_sidearm_weapon {
            label = "P1";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "SD"};
                class STANDARD { label = "Standard"; };
                class SD { label = "SD"; };
            };
        };
        class aceax_family_gm_pilot_coverall_uniform {
            label = "Pilot Coverall";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "BLUE", "GREY"};
                class BLACK { label = "Black"; };
                class BLUE { label = "Blue"; };
                class GREY { label = "Grey"; };
            };
        };
        class aceax_family_gm_pim_sidearm_weapon {
            label = "PiM";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "BROWN"};
                class BLACK { label = "Black"; };
                class BROWN { label = "Brown"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "BARREL"};
                class STANDARD { label = "Standard"; };
                class BARREL { label = "Barrel"; };
            };
        };
        class aceax_family_gm_police_cap_headgear {
            label = "Police Cap";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "GREEN", "WHITE"};
                class BLACK { label = "Black"; };
                class GREEN { label = "Green"; };
                class WHITE { label = "White"; };
            };
        };
        class aceax_family_gm_psh_77_headgear {
            label = "PSH-77";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "CAMO", "STRICH"};
                class OLIVE { label = "Olive"; };
                class CAMO { label = "Camo"; };
                class STRICH { label = "Strich"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "SHIELD_UP", "SHIELD_DOWN"};
                class STANDARD { label = "Standard"; };
                class SHIELD_UP { label = "Shield Up"; };
                class SHIELD_DOWN { label = "Shield Down"; };
            };
        };
        class aceax_family_gm_rpg_7_secondary_weapon {
            label = "RPG-7";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BROWN", "PLUM"};
                class BROWN { label = "Brown"; };
                class PLUM { label = "Plum"; };
            };
        };
        class aceax_family_gm_rpk_7_primary_weapon {
            label = "RPK 7";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BROWN", "BLACK", "PLUM"};
                class BROWN { label = "Brown"; };
                class BLACK { label = "Black"; };
                class PLUM { label = "Plum"; };
            };
        };
        class aceax_family_gm_rpk_74_primary_weapon {
            label = "RPK 74";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BROWN", "BLACK", "PLUM", "STANDARD"};
                class BROWN { label = "Brown"; };
                class BLACK { label = "Black"; };
                class PLUM { label = "Plum"; };
                class STANDARD { label = ""; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "NIGHT"};
                class STANDARD { label = "Standard"; };
                class NIGHT { label = "Night"; };
            };
        };
        class aceax_family_gm_rpk_primary_weapon {
            label = "RPK";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "NIGHT"};
                class STANDARD { label = "Standard"; };
                class NIGHT { label = "Night"; };
            };
        };
        class aceax_family_gm_sg5_primary_weapon {
            label = "SG5";
            author = "Moony";
            options[] = {"type", "variant"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"A2", "A3", "A4", "A5", "N", "NSD1", "NSD2", "SD2", "SD3", "SD5", "SD6"};
                class A2 { label = "A2"; };
                class A3 { label = "A3"; };
                class A4 { label = "A4"; };
                class A5 { label = "A5"; };
                class N { label = "N"; };
                class NSD1 { label = "NSD1"; };
                class NSD2 { label = "NSD2"; };
                class SD2 { label = "SD2"; };
                class SD3 { label = "SD3"; };
                class SD5 { label = "SD5"; };
                class SD6 { label = "SD6"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "FLASHLIGHT"};
                class STANDARD { label = "Standard"; };
                class FLASHLIGHT { label = "Flashlight"; };
            };
        };
        class aceax_family_gm_sg542_primary_weapon {
            label = "SG542";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLACK"};
                class OLIVE { label = "Olive"; };
                class BLACK { label = "Black"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RIS"};
                class STANDARD { label = "Standard"; };
                class RIS { label = "RIS"; };
            };
        };
        class aceax_family_gm_sg550_primary_weapon {
            label = "SG550";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLACK"};
                class OLIVE { label = "Olive"; };
                class BLACK { label = "Black"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RIS"};
                class STANDARD { label = "Standard"; };
                class RIS { label = "RIS"; };
            };
        };
        class aceax_family_gm_sg551_primary_weapon {
            label = "SG551";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "BLACK"};
                class OLIVE { label = "Olive"; };
                class BLACK { label = "Black"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "RIS", "SWAT"};
                class STANDARD { label = "Standard"; };
                class RIS { label = "RIS"; };
                class SWAT { label = "SWAT"; };
            };
        };
        class aceax_family_gm_side_cap_headgear {
            label = "Side Cap";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"GRAY", "GREEN", "OLIVE"};
                class GRAY { label = "Gray"; };
                class GREEN { label = "Green"; };
                class OLIVE { label = "Olive"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "W_M62"};
                class STANDARD { label = "Standard"; };
                class W_M62 { label = "w/ M62"; };
            };
        };
        class aceax_family_gm_special_operations_vest_vest {
            label = "Special Operations Vest";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK", "OLIVE", "WOODLAND"};
                class BLACK { label = "Black"; };
                class OLIVE { label = "Olive"; };
                class WOODLAND { label = "Woodland"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "ARMOR"};
                class STANDARD { label = "Standard"; };
                class ARMOR { label = "Armor"; };
            };
        };
        class aceax_family_gm_t_shirt_uniform {
            label = "T-Shirt";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLUE", "GREEN", "GREY"};
                class BLUE { label = "Blue"; };
                class GREEN { label = "Green"; };
                class GREY { label = "Grey"; };
            };
        };
        class aceax_family_gm_tactical_suspenders_vest {
            label = "Tactical Suspenders";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "CREW", "MG", "DMG", "RIFLEMAN", "AT", "LEADER", "SMG"};
                class STANDARD { label = "Standard"; };
                class CREW { label = "Crew"; };
                class MG { label = "MG"; };
                class DMG { label = "DMG"; };
                class RIFLEMAN { label = "Rifleman"; };
                class AT { label = "AT"; };
                class LEADER { label = "Leader"; };
                class SMG { label = "SMG"; };
            };
        };
        class aceax_family_gm_tank_suit_uniform {
            label = "Tank Suit";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"TROPEN", "FLECKEN", "OLIVE"};
                class TROPEN { label = "Tropen"; };
                class FLECKEN { label = "Flecken"; };
                class OLIVE { label = "Olive"; };
            };
        };
        class aceax_family_gm_type_18_vest {
            label = "Type 18";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"CAMO", "BLACK", "GREEN"};
                class CAMO { label = "Camo"; };
                class BLACK { label = "Black"; };
                class GREEN { label = "Green"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD"};
                class STANDARD { label = "Standard"; };
            };
        };
        class aceax_family_gm_type_3_vest {
            label = "Type 3";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"VEST", "BLUE", "GREY", "GREEN"};
                class VEST { label = "Vest"; };
                class BLUE { label = "Blue"; };
                class GREY { label = "Grey"; };
                class GREEN { label = "Green"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "POUCH"};
                class STANDARD { label = "Standard"; };
                class POUCH { label = "Pouch"; };
            };
        };
        class aceax_family_gm_utv_cap_headgear {
            label = "UTV Cap";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BEIGE", "STRICH", "STRICH_GREEN"};
                class BEIGE { label = "Beige"; };
                class STRICH { label = "Strich"; };
                class STRICH_GREEN { label = "Strich Green"; };
            };
        };
        class aceax_family_gm_utv_vest {
            label = "UTV";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"STRICH"};
                class STRICH { label = "Strich"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"MG", "OFFICER", "RIFLEMAN", "BELT", "LEADER", "SPECIALIST"};
                class MG { label = "MG"; };
                class OFFICER { label = "Officer"; };
                class RIFLEMAN { label = "Rifleman"; };
                class BELT { label = "Belt"; };
                class LEADER { label = "Leader"; };
                class SPECIALIST { label = "Specialist"; };
            };
        };
        class aceax_family_gm_wool_hat_headgear {
            label = "Wool Hat";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK"};
                class BLACK { label = "Black"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"NO_HEADSET", "HEADSET"};
                class NO_HEADSET { label = "No Headset"; };
                class HEADSET { label = "Headset"; };
            };
        };
        class aceax_family_gm_worker_suit_uniform {
            label = "Worker Suit";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLUE", "GREY"};
                class BLUE { label = "Blue"; };
                class GREY { label = "Grey"; };
            };
        };
        class aceax_family_gm_wz_63_headgear {
            label = "wz. 63";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE"};
                class OLIVE { label = "Olive"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_wz_67_headgear {
            label = "wz. 67";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"OLIVE", "WINTER"};
                class OLIVE { label = "Olive"; };
                class WINTER { label = "Winter"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_zsh_3_headgear {
            label = "ZSh-3";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"WHITE", "BLUE", "ORANGE"};
                class WHITE { label = "White"; };
                class BLUE { label = "Blue"; };
                class ORANGE { label = "Orange"; };
            };
        };
    };
    class CfgVehicles {
        class aceax_family_gm_assault_pack_backpack {
            label = "Assault Pack";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MG"};
                class STANDARD { label = "Standard"; };
                class MG { label = "MG"; };
            };
        };
        class aceax_family_gm_combat_backpack_backpack {
            label = "Combat Backpack";
            author = "Moony";
            options[] = {"camo"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"FLECKEN", "TROPEN", "BLACK", "OLIVE", "WINTER"};
                class FLECKEN { label = "Flecken"; };
                class TROPEN { label = "Tropen"; };
                class BLACK { label = "Black"; };
                class OLIVE { label = "Olive"; };
                class WINTER { label = "Winter"; };
            };
        };
        class aceax_family_gm_dshkm_backpack {
            label = "DShKM";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"GUN", "TRIPOD"};
                class GUN { label = "Gun"; };
                class TRIPOD { label = "Tripod"; };
            };
        };
        class aceax_family_gm_satchel_backpack {
            label = "Satchel";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"BLACK"};
                class BLACK { label = "Black"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MEDIC"};
                class STANDARD { label = "Standard"; };
                class MEDIC { label = "Medic"; };
            };
        };
    };
    class CfgGlasses {
        class aceax_family_gm_dust_glasses_facewear {
            label = "Dust Glasses";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"ON", "OFF"};
                class ON { label = "On"; };
                class OFF { label = "Off"; };
            };
        };
        class aceax_family_gm_forest_helmet_camo_facewear {
            label = "Forest Helmet Camo";
            author = "Moony";
            options[] = {"type"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"TYPE_1", "TYPE_2", "TYPE_3", "TYPE_4"};
                class TYPE_1 { label = "Type 1"; };
                class TYPE_2 { label = "Type 2"; };
                class TYPE_3 { label = "Type 3"; };
                class TYPE_4 { label = "Type 4"; };
            };
        };
        class aceax_family_gm_grass_helmet_camo_facewear {
            label = "Grass Helmet Camo";
            author = "Moony";
            options[] = {"type"};
            class type {
                label = "Type";
                alwaysSelectable = 1;
                values[] = {"TYPE_1", "TYPE_2", "TYPE_3", "TYPE_4"};
                class TYPE_1 { label = "Type 1"; };
                class TYPE_2 { label = "Type 2"; };
                class TYPE_3 { label = "Type 3"; };
                class TYPE_4 { label = "Type 4"; };
            };
        };
        class aceax_family_gm_scarf_facewear {
            label = "Scarf";
            author = "Moony";
            options[] = {"camo", "variant"};
            class camo {
                label = "Camo";
                alwaysSelectable = 1;
                values[] = {"TROPEN", "FLECKEN", "BLACK", "BLUE", "MUSTARD", "WHITE_STARS", "FROG", "GREEN", "GREY", "M_84", "OLIVE", "WHITE", "MORA", "RED", "STARS", "STRICHTARN"};
                class TROPEN { label = "Tropen"; };
                class FLECKEN { label = "Flecken"; };
                class BLACK { label = "Black"; };
                class BLUE { label = "Blue"; };
                class MUSTARD { label = "Mustard"; };
                class WHITE_STARS { label = "White Stars"; };
                class FROG { label = "Frog"; };
                class GREEN { label = "Green"; };
                class GREY { label = "Grey"; };
                class M_84 { label = "M/84"; };
                class OLIVE { label = "Olive"; };
                class WHITE { label = "White"; };
                class MORA { label = "Mora"; };
                class RED { label = "Red"; };
                class STARS { label = "Stars"; };
                class STRICHTARN { label = "Strichtarn"; };
            };
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "MESH"};
                class STANDARD { label = "Standard"; };
                class MESH { label = "Mesh"; };
            };
        };
        class aceax_family_gm_storm_hood_facewear {
            label = "Storm Hood";
            author = "Moony";
            options[] = {"variant"};
            class variant {
                label = "Variant";
                alwaysSelectable = 1;
                values[] = {"STANDARD", "DUST_GLASSES", "RED_RIM"};
                class STANDARD { label = "Standard"; };
                class DUST_GLASSES { label = "Dust Glasses"; };
                class RED_RIM { label = "Red Rim"; };
            };
        };
    };
};
