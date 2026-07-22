#pragma once

class CCitadel_Ability_Chrono_KineticCarbineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flShotTimeScaleLingerDuration; // offset 0x1818, size 0x4, align 4
    char _pad_181C[0x4]; // offset 0x181C
    CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // offset 0x1820, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1830, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // offset 0x1840, size 0x88, align 8 | MPropertyStartGroup
};
