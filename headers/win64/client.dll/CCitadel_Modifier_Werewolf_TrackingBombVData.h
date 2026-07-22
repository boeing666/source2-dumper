#pragma once

class CCitadel_Modifier_Werewolf_TrackingBombVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x750, size 0xE0, align 8 | MPropertyGroupName
    bool m_bAllowAlliesToAlsoTrack; // offset 0x830, size 0x1, align 1 | MPropertyGroupName
    char _pad_0831[0x3]; // offset 0x831
    float32 m_flLabelOffset; // offset 0x834, size 0x4, align 4
};
