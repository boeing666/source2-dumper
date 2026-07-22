#pragma once

class CNmGraphDocEntryStateOverrideConditionsNode : public CNmGraphDocResultNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CUtlVector< V_uuid_t > m_pinToStateMapping; // offset 0x108, size 0x18, align 8 | MPropertySuppressField
};
