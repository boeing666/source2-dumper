#pragma once

class CCitadel_Hideout_ClockVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x300, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x28, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HourParticle; // offset 0x108, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MinuteParticle; // offset 0x1E8, size 0xE0, align 8
    CSoundEventName m_strStartHourSound; // offset 0x2C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHourSound; // offset 0x2D8, size 0x10, align 8
    CSoundEventName m_strMinuteSound; // offset 0x2E8, size 0x10, align 8
    float32 m_flHourChimeInterval; // offset 0x2F8, size 0x4, align 4
    char _pad_02FC[0x4]; // offset 0x2FC
};
