
class CfgSoundSets {

    class 300BLK_Shot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_closeShot_SoundShader", "300BLK_midShot_SoundShader", "300BLK_distShot_SoundShader" };
        volumeFactor = 1.2;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        occlusionFactor = 0.5; 
            obstructionFactor = 0.3; 
            spatial = 1; 
            doppler = 0; 
            loop = 0; 
    };
    class 300BLK_Tail_SoundSet {
        soundShaders[] = { "300BLK_tailInterior_SoundShader", "300BLK_tailTrees_SoundShader", "300BLK_tailForest_SoundShader", "300BLK_tailMeadows_SoundShader", "300BLK_tailHouses_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class 300BLK_Shot_Silenced_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_Shot_Silenced_SoundShader", "300BLK_Shot_Silenced_mid_SoundShader"  };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class 300BLK_ShotTail_Silenced_SoundSet {
        soundShaders[] = { "300BLK_tailInterior_Silenced_SoundShader", "300BLK_tailTrees_Silenced_SoundShader", "300BLK_tailForest_Silenced_SoundShader", "300BLK_tailMeadows_Silenced_SoundShader", "300BLK_tailHouses_Silenced_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class 300BLK_silencerShot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_silencerShot_SoundShader", "300BLK_Shot_Silenced_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class 300BLK_silencerTail_SoundSet {
        soundShaders[] = { "300BLK_tailTrees_Silenced_SoundShader", "300BLK_tailForest_Silenced_SoundShader", "300BLK_tailMeadows_Silenced_SoundShader", "300BLK_tailHouses_Silenced_SoundShader", "300BLK_tailInterior_Silenced_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter"; 
    };
    class badger_silencerShot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "badger_Shot_Silenced_SoundShader","badger_Shot_Silenced_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class badger_silencerTail_SoundSet {
        soundShaders[] = { "badger_tailTrees_Silenced_SoundShader", "badger_tailForest_Silenced_SoundShader", "badger_tailMeadows_Silenced_SoundShader", "badger_tailHouses_Silenced_SoundShader", "badger_tailInterior_Silenced_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };

    class samr_Shot_SoundSet {
        soundShaders[] = { "samr_closeShot_SoundShader", "samr_midShot_SoundShader", "samr_distShot_SoundShader", "samr_Closure_SoundShader" };
        volumeFactor = 1.25;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
    };
    class samr_Tail_SoundSet {
        soundShaders[] = {  "samr_tailForest_SoundShader", "samr_tailHouses_SoundShader", "samr_tailInterior_SoundShader", "samr_tailMeadows_SoundShader", "samr_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class samr_silencerShot_SoundSet {
        soundShaders[] = { "samr_silencerShot_SoundShader", "samr_Closure_SoundShader", "samr_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class samr_silencerTail_SoundSet {
        soundShaders[] = { "samr_silencerTailTrees_SoundShader", "samr_silencerTailForest_SoundShader", "samr_silencerTailMeadows_SoundShader", "samr_silencerTailHouses_SoundShader", "samr_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };

    class PBEAR_Shot_SoundSet {
        soundShaders[] = { "300BLK_Closure_SoundShader", "300BLK_closeShot_SoundShader", "300BLK_midShot_SoundShader", "300BLK_distShot_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
    };
    class PBEAR_Tail_SoundSet {
        soundShaders[] = { "300BLK_tailInterior_SoundShader", "300BLK_tailTrees_SoundShader", "300BLK_tailForest_SoundShader", "300BLK_tailMeadows_SoundShader", "300BLK_tailHouses_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };

    class jack_Shot_SoundSet {
        soundShaders[] = { "jack_closeShot_SoundShader", "jack_midShot_SoundShader", "jack_distShot_SoundShader", "jack_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
    };
    class jack_Tail_SoundSet {
        soundShaders[] = {  "jack_tailForest_SoundShader", "jack_tailHouses_SoundShader", "jack_tailInterior_SoundShader", "jack_tailMeadows_SoundShader", "jack_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class jack_silencerShot_SoundSet {
        soundShaders[] = { "jack_silencerShot_SoundShader", "jack_Closure_SoundShader","jack_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class jack_silencerTail_SoundSet {
        soundShaders[] = { "jack_silencerTailTrees_SoundShader", "jack_silencerTailForest_SoundShader", "jack_silencerTailMeadows_SoundShader", "jack_silencerTailHouses_SoundShader", "jack_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };


    class blackjack_Shot_SoundSet {
        soundShaders[] = { "jack_Closure_SoundShader", "300BLK_closeShot_SoundShader", "300BLK_midShot_SoundShader", "300BLK_distShot_SoundShader" };
        volumeFactor = 1.2;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
    };
    class blackjack_Tail_SoundSet {
        soundShaders[] = { "300BLK_tailInterior_SoundShader", "300BLK_tailTrees_SoundShader", "300BLK_tailForest_SoundShader", "300BLK_tailMeadows_SoundShader", "300BLK_tailHouses_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
    };
    class blackjack_silencerShot_SoundSet {
        soundShaders[] = { "300BLK_Shot_Silenced_SoundShader", "jack_Closure_SoundShader", "300BLK_Shot_Silenced_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class blackjack_silencerTail_SoundSet {
        soundShaders[] = { "300BLK_tailTrees_Silenced_SoundShader", "300BLK_tailForest_Silenced_SoundShader", "300BLK_tailMeadows_Silenced_SoundShader", "300BLK_tailHouses_Silenced_SoundShader", "300BLK_tailInterior_Silenced_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };

    class carbine_Shot_SoundSet {
        soundShaders[] = { "carbine_closeShot_SoundShader", "carbine_midShot_SoundShader", "carbine_distShot_SoundShader", "carbine_Closure_SoundShader" };
        volumeFactor = 1.3;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
    };
    class carbine_Tail_SoundSet {
        soundShaders[] = {  "carbine_tailForest_SoundShader", "carbine_tailHouses_SoundShader", "carbine_tailInterior_SoundShader", "carbine_tailMeadows_SoundShader", "carbine_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class carbine_silencerShot_SoundSet {
        soundShaders[] = { "carbine_silencerShot_SoundShader", "carbine_Closure_SoundShader","carbine_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class carbine_silencerTail_SoundSet {
        soundShaders[] = { "carbine_silencerTailTrees_SoundShader", "carbine_silencerTailForest_SoundShader", "carbine_silencerTailMeadows_SoundShader", "carbine_silencerTailHouses_SoundShader", "carbine_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
    };
    class SBR_Shot_SoundSet {
        soundShaders[] = { "SBR_closeShot_SoundShader", "SBR_midShot_SoundShader", "SBR_distShot_SoundShader", "SBR_Closure_SoundShader" };
        volumeFactor = 1.35;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = HLC_defaultDistanceFilter;
    };
    class SBR_Tail_SoundSet {
        soundShaders[] = { "SBR_tailForest_SoundShader", "SBR_tailHouses_SoundShader", "SBR_tailInterior_SoundShader", "SBR_tailMeadows_SoundShader", "SBR_tailTrees_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1; 
            occlusionFactor = 0.3; 
            obstructionFactor = 0; 
            spatial = 1; 
            doppler = 0; 
            loop = 0; 
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
    class SBR_silencerShot_SoundSet {
        soundShaders[] = { "SBR_silencerShot_SoundShader", "SBR_Closure_SoundShader","SBR_silencerShot_mid_SoundShader" };
        volumeFactor = 1;
        volumeCurve = "InverseSquare2Curve";
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
    };
    class SBR_silencerTail_SoundSet {
        soundShaders[] = { "SBR_silencerTailTrees_SoundShader", "SBR_silencerTailForest_SoundShader", "SBR_silencerTailMeadows_SoundShader", "SBR_silencerTailHouses_SoundShader", "SBR_silencerTailInterior_SoundShader" };
        volumeFactor = 0.7;
        volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.1;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
    };
};
