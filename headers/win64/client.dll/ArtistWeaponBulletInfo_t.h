#pragma once

struct ArtistWeaponBulletInfo_t  // sizeof 0xC0, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CPiecewiseCurve m_AttackHorizontalOffset; // offset 0x0, size 0x40, align 8
    CPiecewiseCurve m_AttackVerticalOffset; // offset 0x40, size 0x40, align 8
    CPiecewiseCurve m_AttackForwardOffset; // offset 0x80, size 0x40, align 8
};
