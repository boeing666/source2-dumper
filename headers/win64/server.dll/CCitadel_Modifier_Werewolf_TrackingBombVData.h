#pragma once

class CCitadel_Modifier_Werewolf_TrackingBombVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x790, size 0xE0, align 8 | MPropertyGroupName
    bool m_bAllowAlliesToAlsoTrack; // offset 0x870, size 0x1, align 1 | MPropertyGroupName
    char _pad_0871[0x3]; // offset 0x871
    float32 m_flLabelOffset; // offset 0x874, size 0x4, align 4
};
