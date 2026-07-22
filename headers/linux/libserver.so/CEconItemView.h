#pragma once

class CEconItemView : public IEconItemInterface /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x38]; // offset 0x0
    uint16 m_iItemDefinitionIndex; // offset 0x38, size 0x2, align 2
    char _pad_003A[0x2]; // offset 0x3A
    int32 m_iEntityQuality; // offset 0x3C, size 0x4, align 4
    uint32 m_iEntityLevel; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    uint64 m_iItemID; // offset 0x48, size 0x8, align 8
    uint32 m_iItemIDHigh; // offset 0x50, size 0x4, align 4
    uint32 m_iItemIDLow; // offset 0x54, size 0x4, align 4
    uint32 m_iAccountID; // offset 0x58, size 0x4, align 4
    uint32 m_iInventoryPosition; // offset 0x5C, size 0x4, align 4
    char _pad_0060[0x8]; // offset 0x60
    bool m_bInitialized; // offset 0x68, size 0x1, align 1
    char _pad_0069[0x7]; // offset 0x69
    CAttributeList m_AttributeList; // offset 0x70, size 0x78, align 255
    CAttributeList m_NetworkedDynamicAttributes; // offset 0xE8, size 0x78, align 255
    char[161] m_szCustomName; // offset 0x160, size 0xA1, align 1
    char[161] m_szCustomNameOverride; // offset 0x201, size 0xA1, align 1
    char _pad_02A2[0x6]; // offset 0x2A2
};
