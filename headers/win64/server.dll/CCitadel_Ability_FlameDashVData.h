#pragma once

class CCitadel_Ability_FlameDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FlameDashModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_DashBurstSound; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ChargeHitSound; // offset 0x1408, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // offset 0x1418, size 0xA0, align 8 | MPropertyStartGroup
};
