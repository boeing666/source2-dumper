#pragma once

class CCitadel_MagicianTurret : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC50, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC40, size 0x4, align 4 | MNetworkEnable
    char _pad_0C44[0xC]; // offset 0xC44
};
