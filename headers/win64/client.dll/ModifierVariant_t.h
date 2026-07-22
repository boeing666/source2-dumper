#pragma once

struct ModifierVariant_t  // sizeof 0x20, align 0xFF [trivial_dtor] (client)
{
    ModifierVariantType_t m_eType; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x1C]; // offset 0x4
};
