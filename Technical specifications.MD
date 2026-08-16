# Technical Specifications

## 1. Power Supply

| Parameter | Value |
|---|---|
| DC input voltage | 18-28V, 24V DC nominal |
| Standby power consumption (motors energized, holding torque) | 10-15W |
| Standard multi-axis operation power consumption | 100-150W (average) |
| Peak power (simultaneous high-speed acceleration) | ~240W |

## 2. Current Ratings

| Rail / component | Value |
|---|---|
| Main 24V distribution, system peak | up to 8A |
| Each TMC5160 driver, continuous RMS current | 1.8-2.5A per axis |
| Each TMC5160 driver, transient peak burst (with active forced-air cooling) | up to 3.6A |
| 3.3V logic rail, continuous consumption (180MHz core clock) | ~150mA |
| Dedicated 5V rail (cooling fan + auxiliary peripherals) | up to 500mA |

## 3. Thermal Limits

| Parameter | Value |
|---|---|
| Driver silicon pre-warning threshold | 100°C |
| Automatic over-temperature shutdown | 120°C |
| Operating ambient temperature range | 0-45°C |

## 4. Mechanical and Performance

| Parameter | Value |
|---|---|
| Reduction ratio on primary joints | 20:1 |
| Maximum torque (base and shoulder axes) | > 12.8 Nm |
| Maximum recommended payload (at 400mm reach) | 1.5-2.0 kg |
| Maximum joint angular velocity | ~180°/s (30 RPM at gearbox output) |
| Maximum tool tip linear speed | up to 600 mm/s |
| Minimum angular resolution | 0.0056° per microstep |
| Estimated positioning repeatability | 0.1-0.2 mm |
