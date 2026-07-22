#pragma once

struct RemnantData_t  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
    CHandle< C_BaseEntity > m_hRemnant; // offset 0x0, size 0x4, align 4
    int32 m_nProjectileHandle; // offset 0x4, size 0x4, align 4
};
