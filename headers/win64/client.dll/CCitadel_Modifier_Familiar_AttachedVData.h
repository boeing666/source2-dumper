#pragma once

class CCitadel_Modifier_Familiar_AttachedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CSoundEventName m_strForceDetachSound; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ItemUsedParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HostModifier; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ReplicatedBarrierModifier; // offset 0x850, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AttachEndingModifier; // offset 0x860, size 0x10, align 8
    float32 m_flInputHoldTimeToCancel; // offset 0x870, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flEndingWarningDuration; // offset 0x874, size 0x4, align 4
};
