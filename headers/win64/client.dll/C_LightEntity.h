#pragma once

class C_LightEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (client) {MNetworkVarNames MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CLightComponent* m_CLightComponent; // offset 0x9A8, size 0x8, align 8 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
};
