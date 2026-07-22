#pragma once

struct CNmGraphDefinition::ExternalGraphSlot_t  // sizeof 0x10, align 0x8 [trivial_dtor] (animlib) {MGetKV3ClassDefaults}
{
    int16 m_nNodeIdx; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x6]; // offset 0x2
    CGlobalSymbol m_slotID; // offset 0x8, size 0x8, align 8
};
