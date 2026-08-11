#pragma once

class CCitadel_Item_ProjectileTest : public CCitadel_Item /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    VectorWS m_vLaunchPosition; // offset 0xF78, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0xF84, size 0xC, align 4
    char _pad_0F90[0x80]; // offset 0xF90
};
