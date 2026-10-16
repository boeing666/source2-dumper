#pragma once

class CCitadel_Artist_StrokeBlockerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x160, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_nMeleeHits; // offset 0x28, size 0x4, align 4 | MPropertyStartGroup
    char _pad_002C[0x4]; // offset 0x2C
    CSoundEventName m_strHitSound; // offset 0x30, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strDestroySound; // offset 0x40, size 0x10, align 8
    CUtlOrderedMap< ECitadelAudioLoopSounds, CSoundEventName > m_mapLoopSounds; // offset 0x50, size 0x28, align 8
    bool m_bBlockerIsVisible; // offset 0x78, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0079[0x7]; // offset 0x79
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x80, size 0xE0, align 8
};
