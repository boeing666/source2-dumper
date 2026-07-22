#pragma once

class CInfoRemarkable : public CPointEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    int32 m_iTimesRemarkedUpon; // offset 0x4A0, size 0x4, align 4 | MNotSaved
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_szRemarkContext; // offset 0x4A8, size 0x8, align 8
};
