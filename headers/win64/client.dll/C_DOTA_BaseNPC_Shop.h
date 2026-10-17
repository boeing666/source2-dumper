#pragma once

class C_DOTA_BaseNPC_Shop : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1B68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B28]; // offset 0x0
    DOTA_SHOP_TYPE m_ShopType; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x24]; // offset 0x1B2C
    ParticleIndex_t m_nShopFX; // offset 0x1B50, size 0x4, align 255
    VectorWS m_vShopFXOrigin; // offset 0x1B54, size 0xC, align 4
    float32 m_flLastSpeech; // offset 0x1B60, size 0x4, align 4
    char _pad_1B64[0x4]; // offset 0x1B64
};
