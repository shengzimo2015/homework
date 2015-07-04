int textureandsprite()
{

    if (!formap.loadFromFile("background.png",sf::IntRect(0,0,480,800)))
        return EXIT_FAILURE;

    if (!forplane.loadFromFile("shoot.png",sf::IntRect(0,100,103,133)))
        return EXIT_FAILURE;

    if (!forlive.loadFromFile("live.png",sf::IntRect(38,40,24,22)))
        return EXIT_FAILURE;

    if (!forpowerup.loadFromFile("shoot.png",sf::IntRect(266,398,62,88)))
        return EXIT_FAILURE;

    if (!forplane2.loadFromFile("shoot.png",sf::IntRect(0,0,68,100)))
        return EXIT_FAILURE;
    plane.setPosition(sf::Vector2f(200, 600));x=200;y=600;

    if (!destroy1.loadFromFile("shoot.png",sf::IntRect(532,650,68,100)))
        return EXIT_FAILURE;

    if (!destroy2.loadFromFile("shoot.png",sf::IntRect(605,650,68,100)))
        return EXIT_FAILURE;

    if (!destroy3.loadFromFile("shoot.png",sf::IntRect(670,650,68,100)))
        return EXIT_FAILURE;

    if (!destroy4.loadFromFile("shoot.png",sf::IntRect(740,650,68,100)))
        return EXIT_FAILURE;

    if (!you1.loadFromFile("shoot.png",sf::IntRect(166,236,103,120)))
        return EXIT_FAILURE;

    if (!you2.loadFromFile("shoot.png",sf::IntRect(330,626,103,120)))
        return EXIT_FAILURE;

    if (!you3.loadFromFile("shoot.png",sf::IntRect(330,500,103,120)))
        return EXIT_FAILURE;

    if (!boss.loadFromFile("shoot.png",sf::IntRect(336,750,168,251)))
        return EXIT_FAILURE;

    if (!bgm.loadFromFile("bgm.wav"))
        return -1;
    bgm1.setBuffer(bgm);
    bgm1.play();

    if (!enemydown.loadFromFile("enemydown.ogg"))
        return -1;
    enemydown1.setBuffer(enemydown);

    if (!youdown.loadFromFile("youdown.ogg"))
        return -1;
    youdown1.setBuffer(youdown);

    if (!forshot.loadFromFile("shoot.png",sf::IntRect(69,78,10,22)))
        return EXIT_FAILURE;

    if (!forshot2.loadFromFile("shoot.png",sf::IntRect(1002,990,10,22)))
        return EXIT_FAILURE;

    if (!font.loadFromFile("score.ttf"))
    return EXIT_FAILURE;

    showscore.setFont(font);
    showscore.setString(scorestr);
    showscore.setCharacterSize(40);
    showscore.setColor(sf::Color::White);

    text.setFont(font);
    text.setString("Score");
    text.setCharacterSize(40);
    text.setColor(sf::Color::White);

    die.setFont(font);
    die.setCharacterSize(22);
    die.setString("You have been destroyed press Tab to continue");
    die.setColor(sf::Color::White);

    yourscoreis.setFont(font);
    yourscoreis.setCharacterSize(22);
    yourscoreis.setString("Your Score Is");
    yourscoreis.setColor(sf::Color::Black);

    gg.setFont(font);
    gg.setCharacterSize(40);
    gg.setString("GAME  OVER");
    gg.setColor(sf::Color::Black);

    boss1.setTexture(boss);
    dyou3.setTexture(you3);
    dyou2.setTexture(you2);
    dyou1.setTexture(you1);
    spdestroy4.setTexture(destroy4);
    spdestroy3.setTexture(destroy3);
    spdestroy2.setTexture(destroy2);
    spdestroy1.setTexture(destroy1);
    planef.setTexture(forplane2);
    powerup.setTexture(forpowerup);
    live.setTexture(forlive);
    plane.setTexture(forplane);
    map1.setTexture(formap);
    shot2shape.setTexture(forshot2);
    shotshape.setTexture(forshot);
}
