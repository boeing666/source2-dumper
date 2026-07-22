#pragma once

struct HullFlags_t  // sizeof 0xA, align 0xFF [trivial_dtor] (client)
{
    bool m_bHull_Human; // offset 0x0, size 0x1, align 1
    bool m_bHull_SmallCentered; // offset 0x1, size 0x1, align 1
    bool m_bHull_WideHuman; // offset 0x2, size 0x1, align 1
    bool m_bHull_Tiny; // offset 0x3, size 0x1, align 1
    bool m_bHull_Medium; // offset 0x4, size 0x1, align 1
    bool m_bHull_TinyCentered; // offset 0x5, size 0x1, align 1
    bool m_bHull_Large; // offset 0x6, size 0x1, align 1
    bool m_bHull_LargeCentered; // offset 0x7, size 0x1, align 1
    bool m_bHull_MediumTall; // offset 0x8, size 0x1, align 1
    bool m_bHull_Small; // offset 0x9, size 0x1, align 1
};
