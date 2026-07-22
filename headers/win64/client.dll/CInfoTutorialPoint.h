#pragma once

class CInfoTutorialPoint : public C_PointEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    int32 m_ePointType; // offset 0x5F0, size 0x4, align 4
    char _pad_05F4[0x4]; // offset 0x5F4
    CUtlSymbolLarge m_sMoveTarget; // offset 0x5F8, size 0x8, align 8
    HeroID_t m_HeroID; // offset 0x600, size 0x4, align 255
    char _pad_0604[0x4]; // offset 0x604
};
