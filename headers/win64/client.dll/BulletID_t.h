#pragma once

struct BulletID_t  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
    ShotID_t m_ShotID; // offset 0x0, size 0x4, align 255
    uint32 m_nBulletIndex; // offset 0x4, size 0x4, align 4
};
