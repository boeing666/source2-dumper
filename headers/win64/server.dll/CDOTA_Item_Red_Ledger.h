#pragma once

class CDOTA_Item_Red_Ledger : public CDOTA_Item /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    int32 m_nCurrentAdjective; // offset 0x660, size 0x4, align 4
    int32 m_nBountiesRemaining; // offset 0x664, size 0x4, align 4
    char _pad_0668[0x50]; // offset 0x668
};
