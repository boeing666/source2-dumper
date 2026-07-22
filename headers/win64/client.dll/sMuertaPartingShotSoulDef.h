#pragma once

class sMuertaPartingShotSoulDef  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
public:
    CHandle< C_BaseEntity > hHeroOwner; // offset 0x0, size 0x4, align 4
    CHandle< C_BaseEntity > hSoulClone; // offset 0x4, size 0x4, align 4
};
