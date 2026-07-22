#pragma once

class CLightEntity : public CBaseModelEntity /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CLightComponent* m_CLightComponent; // offset 0x770, size 0x8, align 8
};
