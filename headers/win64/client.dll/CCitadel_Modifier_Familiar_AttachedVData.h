#pragma once

class CCitadel_Modifier_Familiar_AttachedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CSoundEventName m_strForceDetachSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ItemUsedParticle; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HostModifier; // offset 0x880, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ReplicatedBarrierModifier; // offset 0x890, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AttachEndingModifier; // offset 0x8A0, size 0x10, align 8
    float32 m_flInputHoldTimeToCancel; // offset 0x8B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flEndingWarningDuration; // offset 0x8B4, size 0x4, align 4
};
