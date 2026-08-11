#pragma once

class CIngameEvent_SeasonalRewardLine : public CIngameEvent_Base /*0x0*/  // sizeof 0x1D40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D38]; // offset 0x0
    int32 m_eventID; // offset 0x1D38, size 0x4, align 4
    char _pad_1D3C[0x4]; // offset 0x1D3C
};
