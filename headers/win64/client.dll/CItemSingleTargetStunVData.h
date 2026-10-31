#pragma once

class CItemSingleTargetStunVData : public CitadelItemVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StunDelayModifier; // offset 0x1190, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x11A0, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strCastHitSound; // offset 0x1280, size 0x10, align 8 | MPropertyGroupName
};
