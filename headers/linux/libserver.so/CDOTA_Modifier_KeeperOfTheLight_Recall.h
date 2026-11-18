#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Recall : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bWasAttacked; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    CHandle< CBaseEntity > m_hDestinationTarget; // offset 0x1AFC, size 0x4, align 4
};
