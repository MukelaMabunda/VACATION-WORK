#ifndef CABLECURRENT_H
#define CABLECURRENT_H

enum class InstallMethod
{
    Method_1, Method_2, Method_3, Method_4, Method_5
};

enum class noOfPhase
{
    singlePhase, threePhase
};

enum class inFreeAir
{
    None,Horizontal, Vertical, Trefoil
};

class cableCurrent
{
private:
    double current = 0;

    double Xc_Cu = 0;
    double Rc_Cu = 0;

    double Xc_AL = 0;
    double Rc_AL = 0;

    double Rc_Cu_DC = 0;
    double Rc_AL_DC = 0;

    enum hashSizes
    {
        size_1, size_1_5, size_2_5, size_4, size_6, size_10, size_16, size_25, size_35, size_50, size_70,
        size_95, size_120, size_150, size_185, size_240, size_300, size_400, size_500, size_630, size_800,
        size_1000
    };

public:
    hashSizes hashit (double const& cableSize)
    {
        if (cableSize == 1)
        {
            Rc_Cu = 21.9;
            Rc_AL = 36.0;

            Xc_Cu = 0.107;
            Xc_AL = 0.107;

            Rc_Cu_DC = 21.9;
            Rc_AL_DC = 36.0;
            return size_1;
        }
        else if (cableSize == 1.5)
        {
            Rc_Cu = 14.6;
            Rc_AL = 24.0;

            Xc_Cu = 0.100;
            Xc_AL = 0.100;

            Rc_Cu_DC = 14.6;
            Rc_AL_DC = 24.0;
            return size_1_5;
        }
        else if (cableSize == 2.5)
        {
            Rc_Cu = 8.7;
            Rc_AL = 14.4;

            Xc_Cu = 0.095;
            Xc_AL = 0.095;

            Rc_Cu_DC = 8.7;
            Rc_AL_DC = 14.4;
            return size_2_5;
        }
        else if (cableSize == 4)
        {
            Rc_Cu = 5.5;
            Rc_AL = 9.0;

            Xc_Cu = 0.093;
            Xc_AL = 0.093;

            Rc_Cu_DC = 5.5;
            Rc_AL_DC = 9.0;
            return size_4;
        }
        else if (cableSize == 6)
        {
            Rc_Cu = 3.6;
            Rc_AL = 6.0;

            Xc_Cu = 0.090;
            Xc_AL = 0.090;

            Rc_Cu_DC = 3.6;
            Rc_AL_DC = 6.0;
            return size_6;
        }
        else if (cableSize == 10)
        {
            Rc_Cu = 2.2;
            Rc_AL = 3.6;

            Xc_Cu = 0.084;
            Xc_AL = 0.084;

            Rc_Cu_DC = 2.2;
            Rc_AL_DC = 3.6;
            return size_10;
        }
        else if (cableSize == 16)
        {
            Rc_Cu = 1.4;
            Rc_AL = 2.3;

            Xc_Cu = 0.080;
            Xc_AL = 0.080;

            Rc_Cu_DC = 1.4;
            Rc_AL_DC = 2.2;
            return size_16;
        }
        else if (cableSize == 25)
        {
            Rc_Cu = 0.88;
            Rc_AL = 1.44;

            Xc_Cu = 0.079;
            Xc_AL = 0.079;

            Rc_Cu_DC = 0.87;
            Rc_AL_DC = 1.44;
            return size_25;
        }
        else if (cableSize == 35)
        {
            Rc_Cu = 0.63;
            Rc_AL = 1.03;

            Xc_Cu = 0.076;
            Xc_AL = 0.076;

            Rc_Cu_DC = 0.62;
            Rc_AL_DC = 1.03;
            return size_35;
        }
        else if (cableSize == 50)
        {
            Rc_Cu = 0.44;
            Rc_AL = 0.72;

            Xc_Cu = 0.076;
            Xc_AL = 0.076;

            Rc_Cu_DC = 0.44;
            Rc_AL_DC = 0.72;
            return size_50;
        }
        else if (cableSize == 70)
        {
            Rc_Cu = 0.31;
            Rc_AL = 0.52;

            Xc_Cu = 0.074;
            Xc_AL = 0.074;

            Rc_Cu_DC = 0.31;
            Rc_AL_DC = 0.15;
            return size_70;
        }
        else if (cableSize == 95)
        {
            Rc_Cu = 0.23;
            Rc_AL = 0.38;

            Xc_Cu = 0.073;
            Xc_AL = 0.073;

            Rc_Cu_DC = 0.23;
            Rc_AL_DC = 0.38;
            return size_95;
        }
        else if (cableSize == 120)
        {
            Rc_Cu = 0.18;
            Rc_AL = 0.30;

            Xc_Cu = 0.072;
            Xc_AL = 0.072;

            Rc_Cu_DC = 0.18;
            Rc_AL_DC = 0.30;
            return size_120;
        }
        else if (cableSize == 150)
        {
            Rc_Cu = 0.15;
            Rc_AL = 0.24;

            Xc_Cu = 0.072;
            Xc_AL = 0.072;

            Rc_Cu_DC = 0.15;
            Rc_AL_DC = 0.24;
            return size_150;
        }
        else if (cableSize == 185)
        {
            Rc_Cu = 0.12;
            Rc_AL = 0.20;

            Xc_Cu = 0.072;
            Xc_AL = 0.072;

            Rc_Cu_DC = 0.12;
            Rc_AL_DC = 0.19;
            return size_185;
        }
        else if (cableSize == 240)
        {
            Rc_Cu = 0.095;
            Rc_AL = 0.156;

            Xc_Cu = 0.072;
            Xc_AL = 0.072;

            Rc_Cu_DC = 0.091;
            Rc_AL_DC = 0.150;
            return size_240;
        }
        else if (cableSize == 300)
        {
            Rc_Cu = 0.077;
            Rc_AL = 0.127;

            Xc_Cu = 0.071;
            Xc_AL = 0.071;

            Rc_Cu_DC = 0.073;
            Rc_AL_DC = 0.120;
            return size_300;
        }
        else if (cableSize == 400)
        {
            Rc_Cu = 0.060;
            Rc_AL = 0.099;

            Xc_Cu = 0.071;
            Xc_AL = 0.071;

            Rc_Cu_DC = 0.055;
            Rc_AL_DC = 0.090;
            return size_400;
        }
        else if (cableSize == 500)
        {
            Rc_Cu = 0.050;
            Rc_AL = 0.083;

            Xc_Cu = 0.070;
            Xc_AL = 0.070;

            Rc_Cu_DC = 0.044;
            Rc_AL_DC = 0.072;
            return size_500;
        }
        else if (cableSize == 630)
        {
            Rc_Cu = 0.043;
            Rc_AL = 0.071;

            Xc_Cu = 0.069;
            Xc_AL = 0.069;

            Rc_Cu_DC = 0.035;
            Rc_AL_DC = 0.057;
            return size_630;
        }
        else if (cableSize == 800)
        {
            Rc_Cu = 0.037;
            Rc_AL = 0.061;

            Xc_Cu = 0.058;
            Xc_AL = 0.058;

            Rc_Cu_DC = 0.027;
            Rc_AL_DC = 0.045;
            return size_800;
        }
        else if (cableSize == 1000)
        {
            Rc_Cu = 0.033;
            Rc_AL = 0.054;

            Xc_Cu = 0.049;
            Xc_AL = 0.049;

            Rc_Cu_DC = 0.022;
            Rc_AL_DC = 0.036;
            return size_1000;
        }
    }

    cableCurrent(InstallMethod method, float cableSize, unsigned int noOfCables, inFreeAir freeAir)
    {
        string cableSize_ = to_string(cableSize);
        switch (method)
        {
        case InstallMethod::Method_1:
        {
            if (noOfCables == 2)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 11;
                    break;
                case size_1_5:
                    current = 14.5;
                    break;
                case size_2_5:
                    current = 19.5;
                    break;
                case size_4:
                    current = 26;
                    break;
                case size_6:
                    current = 34;
                    break;
                case size_10:
                    current = 46;
                    break;
                case size_16:
                    current = 61;
                    break;
                case size_25:
                    current = 14.5;
                    break;
                case size_35:
                    current = 99;
                    break;
                case size_50:
                    current = 119;
                    break;
                case size_70:
                    current = 151;
                    break;
                case size_95:
                    current = 182;
                    break;
                case size_120:
                    current = 210;
                    break;
                case size_150:
                    current = 240;
                    break;
                case size_185:
                    current = 273;
                    break;
                case size_240:
                    current = 320;
                    break;
                case size_300:
                    current = 367;
                    break;
                case size_400:
                case size_500:
                case size_630:
                case size_800:
                case size_1000:
                    throw "Invalid size for method 1";
                    break;
                }
            }
            else if (noOfCables == 3 || noOfCables == 4)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 10.5;
                    break;
                case size_1_5:
                    current = 13.5;
                    break;
                case size_2_5:
                    current = 18;
                    break;
                case size_4:
                    current = 24;
                    break;
                case size_6:
                    current = 31;
                    break;
                case size_10:
                    current = 42;
                    break;
                case size_16:
                    current = 56;
                    break;
                case size_25:
                    current = 73;
                    break;
                case size_35:
                    current = 89;
                    break;
                case size_50:
                    current = 108;
                    break;
                case size_70:
                    current = 136;
                    break;
                case size_95:
                    current = 164;
                    break;
                case size_120:
                    current = 188;
                    break;
                case size_150:
                    current = 216;
                    break;
                case size_185:
                    current = 245;
                    break;
                case size_240:
                    current = 286;
                    break;
                case size_300:
                    current = 328;
                    break;
                case size_400:
                case size_500:
                case size_630:
                case size_800:
                case size_1000:
                    throw "Invalid size for method 1";
                    break;
                }
            }
            else
            {
                throw "Invalid number of cables for the method 1";
            }
            break;
        }
        case InstallMethod::Method_2:
        {
            if (noOfCables == 2)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 13.5;
                    break;
                case size_1_5:
                    current = 17.5;
                    break;
                case size_2_5:
                    current = 24;
                    break;
                case size_4:
                    current = 32;
                    break;
                case size_6:
                    current = 41;
                    break;
                case size_10:
                    current = 57;
                    break;
                case size_16:
                    current = 76;
                    break;
                case size_25:
                    current = 101;
                    break;
                case size_35:
                    current = 125;
                    break;
                case size_50:
                    current = 151;
                    break;
                case size_70:
                    current = 192;
                    break;
                case size_95:
                    current = 232;
                    break;
                case size_120:
                    current = 269;
                    break;
                case size_150:
                    current = 300;
                    break;
                case size_185:
                    current = 341;
                    break;
                case size_240:
                    current = 400;
                    break;
                case size_300:
                    current = 458;
                    break;
                case size_400:
                    current = 546;
                    break;
                case size_500:
                    current = 626;
                    break;
                case size_630:
                    current = 720;
                    break;
                case size_800:
                case size_1000:
                    throw "Invalid size for method 2";
                    break;
                }
            }
            else if (noOfCables == 3 || noOfCables == 4)
            {
                switch (hashit(cableSize))
                {
                case size_1:
                    current = 12;
                    break;
                case size_1_5:
                    current = 15.5;
                    break;
                case size_2_5:
                    current = 21;
                    break;
                case size_4:
                    current = 28;
                    break;
                case size_6:
                    current = 36;
                    break;
                case size_10:
                    current = 50;
                    break;
                case size_16:
                    current = 68;
                    break;
                case size_25:
                    current = 89;
                    break;
                case size_35:
                    current = 110;
                    break;
                case size_50:
                    current = 134;
                    break;
                case size_70:
                    current = 171;
                    break;
                case size_95:
                    current = 207;
                    break;
                case size_120:
                    current = 239;
                    break;
                case size_150:
                    current = 262;
                    break;
                case size_185:
                    current = 296;
                    break;
                case size_240:
                    current = 346;
                    break;
                case size_300:
                    current = 394;
                    break;
                case size_400:
                    current = 467;
                    break;
                case size_500:
                    current = 533;
                    break;
                case size_630:
                    current = 611;
                    break;
                case size_800:
                case size_1000:
                    throw "Invalid size for method 2";
                    break;
                }
            }
            else
            {
                throw "Invalid number of cables for the method 2";
            }
            case InstallMethod::Method_3:
            {
                if (noOfCables == 2)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                        current = 15.5;
                        break;
                    case size_1_5:
                        current = 20;
                        break;
                    case size_2_5:
                        current = 27;
                        break;
                    case size_4:
                        current = 37;
                        break;
                    case size_6:
                        current = 47;
                        break;
                    case size_10:
                        current = 65;
                        break;
                    case size_16:
                        current = 87;
                        break;
                    case size_25:
                        current = 114;
                        break;
                    case size_35:
                        current = 141;
                        break;
                    case size_50:
                        current = 182;
                        break;
                    case size_70:
                        current = 234;
                        break;
                    case size_95:
                        current = 284;
                        break;
                    case size_120:
                        current = 330;
                        break;
                    case size_150:
                        current = 384;
                        break;
                    case size_185:
                        current = 436;
                        break;
                    case size_240:
                        current = 515;
                        break;
                    case size_300:
                        current = 594;
                        break;
                    case size_400:
                        current = 694;
                        break;
                    case size_500:
                        current = 792;
                        break;
                    case size_630:
                        current = 904;
                        break;
                    case size_800:
                        current = 1030;
                        break;
                    case size_1000:
                        current = 1154;
                        break;
                    }
                }
                else if (noOfCables == 3 || noOfCables == 4)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                        current = 14;
                        break;
                    case size_1_5:
                        current = 18;
                        break;
                    case size_2_5:
                        current = 25;
                        break;
                    case size_4:
                        current = 33;
                        break;
                    case size_6:
                        current = 43;
                        break;
                    case size_10:
                        current = 59;
                        break;
                    case size_16:
                        current = 79;
                        break;
                    case size_25:
                        current = 104;
                        break;
                    case size_35:
                        current = 129;
                        break;
                    case size_50:
                        current = 167;
                        break;
                    case size_70:
                        current = 214;
                        break;
                    case size_95:
                        current = 261;
                        break;
                    case size_120:
                        current = 303;
                        break;
                    case size_150:
                        current = 349;
                        break;
                    case size_185:
                        current = 400;
                        break;
                    case size_240:
                        current = 472;
                        break;
                    case size_300:
                        current = 545;
                        break;
                    case size_400:
                        current = 634;
                        break;
                    case size_500:
                        current = 723;
                        break;
                    case size_630:
                        current = 826;
                        break;
                    case size_800:
                        current = 943;
                        break;
                    case size_1000:
                        current = 1058;
                        break;
                    }
                }
                else
                {
                    throw "Invalid number of cables for the method 3";
                }
                break;
            }
            case InstallMethod::Method_4:
            {
                if (noOfCables == 2)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                    case size_1_5:
                    case size_2_5:
                    case size_4:
                    case size_6:
                    case size_10:
                    case size_16:
                        throw "Invalid size for method 4";
                        break;
                    case size_25:
                        current = 126;
                        break;
                    case size_35:
                        current = 156;
                        break;
                    case size_50:
                        current = 191;
                        break;
                    case size_70:
                        current = 246;
                        break;
                    case size_95:
                        current = 300;
                        break;
                    case size_120:
                        current = 349;
                        break;
                    case size_150:
                        current = 404;
                        break;
                    case size_185:
                        current = 463;
                        break;
                    case size_240:
                        current = 549;
                        break;
                    case size_300:
                        current = 635;
                        break;
                    case size_400:
                        current = 732;
                        break;
                    case size_500:
                        current = 835;
                        break;
                    case size_630:
                        current = 953;
                        break;
                    case size_800:
                        current = 1086;
                        break;
                    case size_1000:
                        current = 1216;
                        break;
                    }
                }
                else if (noOfCables == 3 || noOfCables == 4)
                {
                    switch (hashit(cableSize))
                    {
                    case size_1:
                    case size_1_5:
                    case size_2_5:
                    case size_4:
                    case size_6:
                    case size_10:
                    case size_16:
                        throw "Invalid size for method";
                        break;
                    case size_25:
                        current = 112;
                        break;
                    case size_35:
                        current = 141;
                        break;
                    case size_50:
                        current = 172;
                        break;
                    case size_70:
                        current = 223;
                        break;
                    case size_95:
                        current = 273;
                        break;
                    case size_120:
                        current = 318;
                        break;
                    case size_150:
                        current = 369;
                        break;
                    case size_185:
                        current = 424;
                        break;
                    case size_240:
                        current = 504;
                        break;
                    case size_300:
                        current = 584;
                        break;
                    case size_400:
                        current = 679;
                        break;
                    case size_500:
                        current = 778;
                        break;
                    case size_630:
                        current = 892;
                        break;
                    case size_800:
                        current = 1020;
                        break;
                    case size_1000:
                        current = 1149;
                        break;
                    }
                }
                else
                {
                    throw "Invalid number of cables for the method 4";
                }
                break;
            }
            case InstallMethod::Method_5:
            {
                if (noOfCables == 2 || noOfCables == 3 || noOfCables == 4)
                {
                    if (freeAir == inFreeAir::Horizontal)
                    {
                        switch (hashit(cableSize))
                        {
                        case size_1:
                        case size_1_5:
                        case size_2_5:
                        case size_4:
                        case size_6:
                        case size_10:
                        case size_16:
                            throw "Invalid size for method 5";
                            break;
                        case size_25:
                            current = 146;
                            break;
                        case size_35:
                            current = 181;
                            break;
                        case size_50:
                            current = 219;
                            break;
                        case size_70:
                            current = 281;
                            break;
                        case size_95:
                            current = 341;
                            break;
                        case size_120:
                            current = 396;
                            break;
                        case size_150:
                            current = 456;
                            break;
                        case size_185:
                            current = 521;
                            break;
                        case size_240:
                            current = 615;
                            break;
                        case size_300:
                            current = 709;
                            break;
                        case size_400:
                            current = 852;
                            break;
                        case size_500:
                            current = 982;
                            break;
                        case size_630:
                            current = 1138;
                            break;
                        case size_800:
                            current = 1265;
                            break;
                        case size_1000:
                            current = 1420;
                            break;
                        }
                    }
                    else if (freeAir == inFreeAir::Vertical)
                    {
                        switch (hashit(cableSize))
                        {
                        case size_1:
                        case size_1_5:
                        case size_2_5:
                        case size_4:
                        case size_6:
                        case size_10:
                        case size_16:
                            throw "Invalid size for method";
                            break;
                        case size_25:
                            current = 130;
                            break;
                        case size_35:
                            current = 162;
                            break;
                        case size_50:
                            current = 197;
                            break;
                        case size_70:
                            current = 254;
                            break;
                        case size_95:
                            current = 311;
                            break;
                        case size_120:
                            current = 362;
                            break;
                        case size_150:
                            current = 419;
                            break;
                        case size_185:
                            current = 480;
                            break;
                        case size_240:
                            current = 569;
                            break;
                        case size_300:
                            current = 659;
                            break;
                        case size_400:
                            current = 795;
                            break;
                        case size_500:
                            current = 920;
                            break;
                        case size_630:
                            current = 1070;
                            break;
                        case size_800:
                            current = 1188;
                            break;
                        case size_1000:
                            current = 1337;
                            break;
                        }
                    }
                    else if (freeAir == inFreeAir::Trefoil)
                    {
                        switch (hashit(cableSize))
                        {
                        case size_1:
                        case size_1_5:
                        case size_2_5:
                        case size_4:
                        case size_6:
                        case size_10:
                        case size_16:
                            throw "Invalid size for method 5";
                            break;
                        case size_25:
                            current = 110;
                            break;
                        case size_35:
                            current = 137;
                            break;
                        case size_50:
                            current = 167;
                            break;
                        case size_70:
                            current = 216;
                            break;
                        case size_95:
                            current = 264;
                            break;
                        case size_120:
                            current = 308;
                            break;
                        case size_150:
                            current = 356;
                            break;
                        case size_185:
                            current = 409;
                            break;
                        case size_240:
                            current = 485;
                            break;
                        case size_300:
                            current = 561;
                            break;
                        case size_400:
                            current = 656;
                            break;
                        case size_500:
                            current = 749;
                            break;
                        case size_630:
                            current = 855;
                            break;
                        case size_800:
                            current = 971;
                            break;
                        case size_1000:
                            current = 1079;
                            break;
                        }
                    }
                    throw "Invalid installation for (in free air) choose between Horizontal/Vertical flat spaced and Trefoil";
                }
                else
                {
                    throw "Invalid number of cables for the method 5";
                }
                break;
            }
        }
        }
    }
};

#endif // CABLECURRENT_H
