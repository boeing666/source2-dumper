#pragma once

enum DampingSpeedFunction : uint32_t  // sizeof 0x4
{
    NoDamping = 0,
    Constant = 1,
    Spring = 2,
    AsymmetricSpring = 3,
};
