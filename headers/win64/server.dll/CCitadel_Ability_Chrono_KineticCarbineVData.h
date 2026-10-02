#pragma once

class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flShotTimeScaleLingerDuration; // offset 0x13E8, size 0x4, align 4
    char _pad_13EC[0x4]; // offset 0x13EC
    CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1400, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // offset 0x1410, size 0xA0, align 8 | MPropertyStartGroup
    CSoundEventName m_strSlowZoomSound; // offset 0x14B0, size 0x10, align 8 | MPropertyStartGroup
};
