#pragma once

class CDOTA_Item_MagicWand : public CDOTA_Item /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    float32 charge_radius; // offset 0x660, size 0x4, align 4
    int32 max_charges; // offset 0x664, size 0x4, align 4
};
