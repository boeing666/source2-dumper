#pragma once

class CLogicLineToEntity : public CLogicalEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CEntityOutputTemplate< Vector > m_Line; // offset 0x498, size 0x28, align 8
    CUtlSymbolLarge m_SourceName; // offset 0x4C0, size 0x8, align 8
    CHandle< CBaseEntity > m_StartEntity; // offset 0x4C8, size 0x4, align 4
    CHandle< CBaseEntity > m_EndEntity; // offset 0x4CC, size 0x4, align 4
};
