#pragma once

class CCitadel_Ability_Gunslinger_DemonCarbineVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1450, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flShotTimeScaleLingerDuration; // offset 0x13A0, size 0x4, align 4
    char _pad_13A4[0x4]; // offset 0x13A4
    CEmbeddedSubclass< CCitadelModifier > m_ChargingModifier; // offset 0x13A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13B8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraDemonCarbineShotFired; // offset 0x13C8, size 0x88, align 8 | MPropertyStartGroup
};
