#pragma once

enum CCitadel_Ability_Baba_BubblingBrew::EState : uint32_t  // sizeof 0x4
{
    None = 0,
    Casting = 1,
    ProjectileWait = 2,
    Exploding = 3,
};
