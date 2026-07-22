#pragma once

class C_DOTA_BaseNPC_Shop : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BA4]; // offset 0x0
    DOTA_SHOP_TYPE m_ShopType; // offset 0x1BA4, size 0x4, align 4
    char _pad_1BA8[0x20]; // offset 0x1BA8
    ParticleIndex_t m_nShopFX; // offset 0x1BC8, size 0x4, align 255
    VectorWS m_vShopFXOrigin; // offset 0x1BCC, size 0xC, align 4
    float32 m_flLastSpeech; // offset 0x1BD8, size 0x4, align 4
    char _pad_1BDC[0x4]; // offset 0x1BDC
};
