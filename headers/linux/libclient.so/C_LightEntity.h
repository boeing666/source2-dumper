#pragma once

class C_LightEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0x1028, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CLightComponent* m_CLightComponent; // offset 0x1020, size 0x8, align 8
};
