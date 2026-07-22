#pragma once

class CCitadel_Ability_FlameDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FlameDashModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_DashBurstSound; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ChargeHitSound; // offset 0x1838, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // offset 0x1848, size 0x88, align 8 | MPropertyStartGroup
};
