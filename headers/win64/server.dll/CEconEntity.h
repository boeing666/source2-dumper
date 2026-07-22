#pragma once

class CEconEntity : public CBaseFlex /*0x0*/, public IHasAttributes /*0xAE0*/  // sizeof 0xC50, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    CAttributeContainer m_AttributeManager; // offset 0xAF0, size 0x158, align 255 | MNetworkEnable
    CHandle< CBaseEntity > m_hOldProvidee; // offset 0xC48, size 0x4, align 4
    int32 m_iOldOwnerClass; // offset 0xC4C, size 0x4, align 4
};
