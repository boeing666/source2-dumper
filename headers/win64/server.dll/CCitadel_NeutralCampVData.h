#pragma once

class CCitadel_NeutralCampVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_iInitialSpawnDelayInSeconds; // offset 0x28, size 0x4, align 4 | MPropertyStartGroup
    int32 m_iSpawnIntervalInSeconds; // offset 0x2C, size 0x4, align 4
    int32 m_iSpawnIntervalChange; // offset 0x30, size 0x4, align 4
    int32 m_iSpawnIntervalMin; // offset 0x34, size 0x4, align 4
    ENeutralTrooperType m_eNeutralType; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CSoundEventName m_sIdleAmbient; // offset 0x40, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sAlertAmbient; // offset 0x50, size 0x10, align 8
};
