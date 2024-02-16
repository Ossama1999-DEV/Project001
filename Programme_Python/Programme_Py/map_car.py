import pygame
import random

pygame.init()

# Define colors
black = [0, 0, 0]

# Set up the screen with the background image
background_image = pygame.image.load("map.jpg")
width, height = 800, 480
background_image = pygame.transform.scale(background_image, (width, height))
scr = pygame.display.set_mode((width, height))
pygame.display.set_caption("Car Animation")

# Create a car
car_image = pygame.Surface((30, 15))
car_image.fill((255, 0, 0))
car_rect = car_image.get_rect()
car_rect.center = (width // 2, height - 30)

# Initialize clock and done variable
clock = pygame.time.Clock()
done = False

while not done:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True

    keys = pygame.key.get_pressed()
    # Move the car based on arrow key inputs
    if keys[pygame.K_LEFT] and car_rect.left > 0:
        car_rect.move_ip(-5, 0)
    if keys[pygame.K_RIGHT] and car_rect.right < width:
        car_rect.move_ip(5, 0)
    if keys[pygame.K_UP] and car_rect.top > 0:
        car_rect.move_ip(0, -5)
    if keys[pygame.K_DOWN] and car_rect.bottom < height:
        car_rect.move_ip(0, 5)

    # Draw the background image
    scr.blit(background_image, (0, 0))

    # Draw the car
    scr.blit(car_image, car_rect.topleft)

    # Update the display
    pygame.display.flip()

    # Cap the frame rate
    clock.tick(60)

# Quit the game
pygame.quit()
