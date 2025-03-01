class planeLoadouts
{
    class CASDIVE
    {
        // ACM Phalanx Downfall
        class acm_gm_aaf2015_SOG_aaf_v_Mig21_CAS_plane
        {
            loadout[] = {"vn_rocket_s5_he_x16","vn_rocket_s5_he_x16","vn_gunpod_gsh23l_v_200_mag"};
            mainGun = "vn_gunpod_gsh23l";
            rocketLauncher[] = {"vn_rocket_s5_he_launcher"};
            diveParams[] = {[1000, 600, 170, 55, 15, {0, 0}};
        };
        class acm_gm_aaf2015_SOG_aaf_v_Mig21_HBMB_plane
        {
            loadout[] = {"vn_bomb_1000_fab500_he_mag_x1","vn_bomb_1000_fab500_he_mag_x1","vn_fuel_mig21_490_camo_01_mag"};
            bombRacks[] = {"vn_bomb_fab500_he_launcher"};
            diveParams[] = {[1000, 600, 170, 55, 15, {0, 0}};
        };
        // ACM Griffin's Ascent
        class acm_gm_aaf2028_asdf_Plane_Gripen
        {
            loadout[] = {"PylonMissile_1Rnd_BombCluster_01_F","PylonMissile_Bomb_GBU12_x1"};
            mainGun = "weapon_Fighter_Gun20mm_AA";
            bombRacks[] = {"BombCluster_01_F","weapon_GBU12Launcher"};
            diveParams[] = {1000, 600, 180, 55, 15, {0, 0}};
        };
    };

    class CAS
    {
        // ACM Phalanx Downfall
        class acm_gm_aaf2015_SOG_aaf_v_Mig21_ATGM_plane
        {
            loadout[] = {"vn_missile_mig21_kh66_mag_x1","vn_missile_mig21_kh66_mag_x1","vn_gunpod_gsh23l_v_200_mag"};
            mainGun = "vn_gunpod_gsh23l";
            missileLauncher[] = {"vn_missile_kh66_launcher"};
        };
        class acm_gm_aaf2015_aaf_v_a143_cas_plane
        {
            loadout[] = {"PylonRack_1Rnd_LG_scalpel","PylonRack_1Rnd_AAA_missiles","PylonMissile_1Rnd_Bomb_04_F","PylonWeapon_300Rnd_20mm_shells","PylonMissile_1Rnd_Bomb_04_F","PylonRack_1Rnd_AAA_missiles","PylonRack_1Rnd_LG_scalpel"};
            mainGun = "Twin_Cannon_20mm_gunpod";
            rocketLauncher[] = {"Rocket_04_AP_Plane_CAS_01_F","Rocket_04_HE_Plane_CAS_01_F","missiles_DAR"};
            missileLauncher[] = {"Missile_AGM_02_Plane_CAS_01_F", "missiles_SCALPEL"};
        };
        // ACM Griffin's Ascent
        class acm_gm_aaf2028_asdf_Plane_Gripen
        {
            loadout[] = {"PylonRack_Missile_AGM_02_x1","PylonRack_Missile_AGM_02_x1","PylonRack_Missile_AGM_02_x2","PylonRack_Missile_AGM_02_x2"};
            mainGun = "weapon_Fighter_Gun20mm_AA";
            rocketLauncher[] = {};
            missileLauncher[] = {"weapon_AGM_65Launcher"};
        };
    };
   
    class AA
    {
        // ACM Phalanx Downfall
        class acm_gm_aaf2015_SOG_aaf_v_Mig21_CAP_plane
        {
            loadout[] = {"vn_missile_mig21_aa2_mag_x1","vn_missile_mig21_aa2_mag_x1","vn_fuel_mig21_490_mag"};
        };
        // ACM Griffin's Ascent
        class acm_gm_aaf2028_asdf_Plane_Gripen
        {
            loadout[] = {"magazine_Fighter04_Gun20mm_AA_x250","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine","PylonMissile_Missile_BIM9X_x1","PylonMissile_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","PylonRack_Missile_AMRAAM_C_x2","PylonRack_Missile_AMRAAM_C_x2"};
            mainGun = "weapon_Fighter_Gun20mm_AA";
            missileLauncher[] = {"weapon_BIM9xLauncher","weapon_AMRAAMLauncher"};
        };
    };
};
