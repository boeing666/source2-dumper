#pragma once

class C_LightEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0xD08, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    CLightComponent* m_CLightComponent; // offset 0xD00, size 0x8, align 8
};
