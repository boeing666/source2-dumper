#pragma once

class CCitadel_Modifier_Deadpack_MaxHeatVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_OverheatLaunchModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_OverheatAirToBackflipModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_JetpackLockoutModifier; // offset 0x7B0, size 0x10, align 8
    float32 m_flLaunchAngleRandom; // offset 0x7C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flLaunchZFractionWhenFlyingSelf; // offset 0x7C4, size 0x4, align 4
    CRangeFloat m_flLaunchForce; // offset 0x7C8, size 0x8, align 255
    CRangeFloat m_flLaunchForceSelf; // offset 0x7D0, size 0x8, align 255
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StunTriggeredParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionParticle; // offset 0x8B8, size 0xE0, align 8
    CSoundEventName m_strHitConfirmSound; // offset 0x998, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strExplodeSound; // offset 0x9A8, size 0x10, align 8
};
