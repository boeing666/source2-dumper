#pragma once

class C_DOTA_BaseNPC_Shop : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BAC]; // offset 0x0
    DOTA_SHOP_TYPE m_ShopType; // offset 0x1BAC, size 0x4, align 4
    char _pad_1BB0[0x20]; // offset 0x1BB0
    ParticleIndex_t m_nShopFX; // offset 0x1BD0, size 0x4, align 255
    VectorWS m_vShopFXOrigin; // offset 0x1BD4, size 0xC, align 4
    float32 m_flLastSpeech; // offset 0x1BE0, size 0x4, align 4
    char _pad_1BE4[0x4]; // offset 0x1BE4
};
