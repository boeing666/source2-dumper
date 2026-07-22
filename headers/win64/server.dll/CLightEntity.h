#pragma once

class CLightEntity : public CBaseModelEntity /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CLightComponent* m_CLightComponent; // offset 0x778, size 0x8, align 8
};
