#pragma once

class CCitadel_Modifier_Werewolf_TrackingBombVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    bool m_bAllowAlliesToAlsoTrack; // offset 0x840, size 0x1, align 1 | MPropertyGroupName
    char _pad_0841[0x3]; // offset 0x841
    float32 m_flLabelOffset; // offset 0x844, size 0x4, align 4
};
