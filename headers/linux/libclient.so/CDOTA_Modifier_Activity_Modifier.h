#pragma once

class CDOTA_Modifier_Activity_Modifier : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlSymbolLarge m_activityModifier; // offset 0x1A58, size 0x8, align 8
};
