#pragma once

class C_DOTA_BaseNPC_Shop : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    DOTA_SHOP_TYPE m_ShopType; // offset 0x1A20, size 0x4, align 4
    char _pad_1A24[0x24]; // offset 0x1A24
    ParticleIndex_t m_nShopFX; // offset 0x1A48, size 0x4, align 255
    VectorWS m_vShopFXOrigin; // offset 0x1A4C, size 0xC, align 4
    float32 m_flLastSpeech; // offset 0x1A58, size 0x4, align 4
    char _pad_1A5C[0x4]; // offset 0x1A5C
};
